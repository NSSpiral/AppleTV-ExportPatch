/* Runtime dump - BKSHIDEventVendorDefinedDescriptor
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventVendorDefinedDescriptor : BKSHIDEventKeyboardDescriptor

@property (readonly) unsigned int page;
@property (readonly) unsigned int usage;

+ (BKSHIDEventVendorDefinedDescriptor *)descriptorWithPage:(unsigned int)arg0 usage:(unsigned int)arg1;

- (BKSHIDEventVendorDefinedDescriptor *)_initWithPage:(unsigned int)arg0 usage:(unsigned int)arg1;

@end
