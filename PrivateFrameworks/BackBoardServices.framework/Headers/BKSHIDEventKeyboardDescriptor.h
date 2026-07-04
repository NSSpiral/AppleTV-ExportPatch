/* Runtime dump - BKSHIDEventKeyboardDescriptor
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventKeyboardDescriptor : BKSHIDEventDescriptor
{
    unsigned int _page;
    unsigned int _usage;
}

@property (readonly) unsigned int page;
@property (readonly) unsigned int usage;

+ (char)supportsSecureCoding;
+ (BKSHIDEventKeyboardDescriptor *)descriptorWithPage:(unsigned int)arg0 usage:(unsigned int)arg1;

- (BKSHIDEventKeyboardDescriptor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)page;
- (char)describes:(id)arg0;
- (BKSHIDEventKeyboardDescriptor *)_initWithPage:(unsigned int)arg0 usage:(unsigned int)arg1 eventType:(unsigned int)arg2;
- (unsigned int)usage;

@end
