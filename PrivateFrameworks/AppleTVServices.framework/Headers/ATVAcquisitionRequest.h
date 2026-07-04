/* Runtime dump - ATVAcquisitionRequest
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVAcquisitionRequest : NSObject
{
    char _cancelled;
    ATVAcquisitionProperties * _properties;
    id _completionBlock;
}

@property (copy, nonatomic) ATVAcquisitionProperties * properties;
@property (copy, nonatomic) id completionBlock;
@property char cancelled;

- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (char)isCancelled;
- (void)setCancelled:(char)arg0;
- (void).cxx_destruct;
- (void)setProperties:(ATVAcquisitionProperties *)arg0;
- (ATVAcquisitionProperties *)properties;

@end
