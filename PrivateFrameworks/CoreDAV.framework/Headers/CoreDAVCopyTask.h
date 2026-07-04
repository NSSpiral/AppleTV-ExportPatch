/* Runtime dump - CoreDAVCopyTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (nonatomic) <CoreDAVCopyTaskDelegate> * delegate;

- (void)dealloc;
- (NSString *)httpMethod;
- (char)validate:(id *)arg0;
- (void)_callBackToDelegateWithResponses:(NSSet *)arg0 error:(NSError *)arg1;

@end
