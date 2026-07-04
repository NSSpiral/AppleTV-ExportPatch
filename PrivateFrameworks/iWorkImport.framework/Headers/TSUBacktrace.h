/* Runtime dump - TSUBacktrace
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUBacktrace : NSObject
{
    void * * _callstack;
    int _frames;
    int _initAdjustment;
}

+ (TSUBacktrace *)new;
+ (TSUBacktrace *)backtrace;
+ (NSString *)caller;
+ (TSUBacktrace *)callee;

- (void)dealloc;
- (TSUBacktrace *)init;
- (char)isEqual:(NSObject *)arg0;
- (TSUBacktrace *)initWithAdjustment:(int)arg0;
- (NSObject *)callerAtIndex:(int)arg0;
- (NSString *)caller;
- (id)callee;
- (NSString *)backtraceString;

@end
