/* Runtime dump - BKSHIDEventDescriptor
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding>
{
    unsigned int _hidEventType;
}

@property (readonly) unsigned int hidEventType;

+ (char)supportsSecureCoding;
+ (NSObject *)descriptorWithEventType:(unsigned int)arg0;
+ (NSObject *)reusableDescriptorWithEventType:(unsigned int)arg0;
+ (BKSHIDEventDescriptor *)reusableVendorDefinedDescriptorWithPage:(unsigned int)arg0 usage:(unsigned int)arg1;
+ (BKSHIDEventDescriptor *)reusableKeyboardDescriptorWithPage:(unsigned int)arg0 usage:(unsigned int)arg1;

- (BKSHIDEventDescriptor *)initWithEventType:(unsigned int)arg0;
- (BKSHIDEventDescriptor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)hidEventType;
- (char)describes:(id)arg0;

@end
