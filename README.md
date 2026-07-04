# AppleTV Binary Patcher

Since iOS 6 on the Apple TV 2, Apple has embedded the classes and methods for Backrow directly in the AppleTV binary with no exports. This made development tedious as you would need to dynamically load classes at runtime using theos and use associated objects instead of accessing properties directly.

This tool patches the Apple TV 2/3 (Lowtide) binary to export all ObjC class and metaclass symbols via the Mach-O export trie. This re-enables native ObjC linking with `-bundle_loader` for FrAppliance plugins and other bundles.

I have also included the required Backrow/Kernel headers (iOS 8):
Backrow.framework
Kernel.framework


### Step 1: Extract Symbols from the Binary
python3 extract_class_meta.py /path/to/AppleTV class_meta_symbols.txt

### Step 2: Patch the Export Trie
python3 patch_lowtide_inplace.py —input AppleTV —output AppleTV.patched — symbols class_meta_symbols.txt

### Step 3: Re-sign with ldid (I use xerub’s for SHA-1 hashes)
ldid -e AppleTV > /tmp/AppleTV_ent.xml
ldid -S/tmp/AppleTV_ent.xml AppleTV.patched

### Step 4: Deploy to Device

```bash
# Stop Lowtide (frees HFS+ inode blocks)
sshpass -p alpine ssh root@<DEVICE_IP> \
    'launchctl unload /System/Library/LaunchDaemons/com.apple.frontrow.plist; \
     killall -9 AppleTV; \
     rm -f /Applications/AppleTV.app/AppleTV'

# Upload patched binary
cat AppleTV_patched | sshpass -p alpine ssh root@<DEVICE_IP> \
    'cat > /Applications/AppleTV.app/AppleTV && chmod 755 /Applications/AppleTV.app/AppleTV'

# Start Lowtide
sshpass -p alpine ssh root@<DEVICE_IP> \
    'launchctl load /System/Library/LaunchDaemons/com.apple.frontrow.plist'

# Verify
sshpass -p alpine ssh root@<DEVICE_IP> \
    'launchctl list com.apple.frontrow'
```

### Step 5: Using the new exports

Add this to your BRAppliance class

+ (void)initialize {
	dlopen("/Applications/AppleTV.app/AppleTV", RTLD_LAZY);
}
