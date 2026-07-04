/* Runtime dump - BrightnessSystemClientExportedObj
 * Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol>
{
    id clientBlock;
    NSObject<OS_dispatch_queue> * queue;
    BrightnessSystemClientInternal * _target;
}

@property (nonatomic) BrightnessSystemClientInternal * target;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setTarget:(BrightnessSystemClientInternal *)arg0;
- (BrightnessSystemClientInternal *)target;
- (void)registerNotificationBlock:(id /* block */)arg0;
- (void)notifyChangedProperty:(NSObject *)arg0 value:(NSObject *)arg1;
- (void)unregisterNotificationBlock;

@end
