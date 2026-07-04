/* Runtime dump - PlistProcessor
 * Image: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
 */

@interface PlistProcessor : NSObject

+ (PlistProcessor *)sharedPlistProcessor;

- (void)scanPlistsAtPath:(NSString *)arg0 execBlock:(id /* block */)arg1;
- (NSDictionary *)copyAndFixPlist:(id)arg0 forMountPoint:(NSObject *)arg1;
- (BOOL)verifyPlist:(id)arg0 forMountPoint:(NSObject *)arg1;

@end
