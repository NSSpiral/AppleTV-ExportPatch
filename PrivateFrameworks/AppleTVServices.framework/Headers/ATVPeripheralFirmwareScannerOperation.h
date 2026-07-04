/* Runtime dump - ATVPeripheralFirmwareScannerOperation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPeripheralFirmwareScannerOperation : NSOperation <MobileAccessoryUpdaterDelegate>
{
    MobileAccessoryUpdater * _mauUpdater;
    NSDictionary * _options;
    NSObject<OS_dispatch_group> * _group;
    id _completion;
}

@property (copy, nonatomic) id completion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)cancel;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void)main;
- (void).cxx_destruct;
- (void)cleanup;
- (void)operationCompletedWithResult:(int)arg0 error:(NSError *)arg1;
- (NSObject *)targetStep;
- (void)deviceClassAttached:(id)arg0;
- (void)stepComplete:(id)arg0 deviceClass:(NSString *)arg1 successful:(char)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)stepRunning:(id)arg0 deviceClass:(NSString *)arg1 progress:(double)arg2 overallProgress:(double)arg3 info:(NSDictionary *)arg4;
- (void)deviceClassDetached:(id)arg0 error:(NSError *)arg1;
- (ATVPeripheralFirmwareScannerOperation *)initWithPeripheral:(TRDeviceSetupPeripheral *)arg0;

@end
