/* Runtime dump - CoreDAVMoveTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask
{
    NSString * _previousETag;
}

@property (nonatomic) <CoreDAVMoveTaskDelegate> * delegate;
@property (retain, nonatomic) NSString * previousETag;

- (void)dealloc;
- (NSString *)description;
- (NSString *)httpMethod;
- (NSDictionary *)additionalHeaderValues;
- (NSString *)previousETag;
- (void)setPreviousETag:(NSString *)arg0;
- (void)_callBackToDelegateWithResponses:(NSSet *)arg0 error:(NSError *)arg1;

@end
