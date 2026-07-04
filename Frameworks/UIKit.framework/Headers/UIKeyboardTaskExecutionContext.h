/* Runtime dump - UIKeyboardTaskExecutionContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardTaskExecutionContext : NSObject
{
    UIKeyboardTaskExecutionContext * _parentExecutionContext;
    id _continuation;
    id _info;
    UIKeyboardTaskQueue * _executionQueue;
}

@property (retain, nonatomic) id info;
@property (readonly, nonatomic) UIKeyboardTaskQueue * executionQueue;

- (void)dealloc;
- (UIKeyboardTaskExecutionContext *)init;
- (GEOPhotoInfo *)info;
- (void)returnExecutionToParent;
- (id)childWithContinuation:(unsigned long long)arg0;
- (void)transferExecutionToMainThreadWithTask:(NSObject *)arg0;
- (void)returnExecutionToParentWithInfo:(NSDictionary *)arg0;
- (UIKeyboardTaskQueue *)executionQueue;
- (UIKeyboardTaskExecutionContext *)initWithParentContext:(NSManagedObjectContext *)arg0 continuation:(unsigned long long)arg1;
- (void)setInfo:(NSDictionary *)arg0;
- (UIKeyboardTaskExecutionContext *)initWithExecutionQueue:(UIKeyboardTaskQueue *)arg0;

@end
