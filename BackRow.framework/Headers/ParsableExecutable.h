/* Runtime dump - ParsableExecutable
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ParsableExecutable : NSObject
{
    id target_;
    NSString * ivarName_;
    Class argumentClass_;
}

@property (retain) id target;
@property (copy) NSString * ivarName;
@property Class argumentClass;

- (ParsableExecutable *)initWithTarget:(NSObject *)arg0 ivarName:(NSString *)arg1 argumentClass:(Class)arg2;
- (Class)argumentClass;
- (NSString *)ivarName;
- (void)setIvarName:(NSString *)arg0;
- (void)setArgumentClass:(Class)arg0;
- (void)dealloc;
- (ParsableExecutable *)init;
- (void)setTarget:(NSObject *)arg0;
- (NSObject *)target;
- (void).cxx_destruct;

@end
