/* Runtime dump - ATVJSTimedMetadataOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVJSTimedMetadataOperation : NSBlockOperation
{
    char _operationComplete;
}

@property (nonatomic) char operationComplete;

- (char)operationComplete;
- (void)setOperationComplete:(char)arg0;
- (char)isFinished;

@end
