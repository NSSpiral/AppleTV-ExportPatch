/* Runtime dump - SSDownloadPhase
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying>
{
    SSOperationProgress * _operationProgress;
}

@property (readonly) int phaseType;
@property (readonly) long long progressValue;
@property (readonly) long long totalProgressValue;
@property (readonly) int progressUnits;
@property (readonly) double estimatedSecondsRemaining;
@property (readonly) float progressChangeRate;
@property (readonly) SSOperationProgress * operationProgress;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSDownloadPhase *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSDownloadPhase *)init;
- (SSDownloadPhase *)copyWithZone:(struct _NSZone *)arg0;
- (double)estimatedSecondsRemaining;
- (SSOperationProgress *)operationProgress;
- (SSDownloadPhase *)initWithOperationProgress:(SSOperationProgress *)arg0;
- (int)phaseType;
- (int)progressUnits;
- (float)progressChangeRate;
- (long long)progressValue;
- (long long)totalProgressValue;

@end
