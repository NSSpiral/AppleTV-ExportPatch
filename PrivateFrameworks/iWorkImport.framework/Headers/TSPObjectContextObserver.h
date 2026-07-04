/* Runtime dump - TSPObjectContextObserver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectContextObserver : NSObject
{
    id _target;
    SEL _action;
}

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;

- (TSPObjectContextObserver *)init;
- (TSPObjectContextObserver *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (SEL)action;
- (NSObject *)target;
- (void).cxx_destruct;

@end
