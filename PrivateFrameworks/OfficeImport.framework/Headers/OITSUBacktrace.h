/* Runtime dump - OITSUBacktrace
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUBacktrace : NSObject
{
    void * * _callstack;
    int _frames;
    int _initAdjustment;
}

+ (OITSUBacktrace *)new;
+ (OITSUBacktrace *)backtrace;
+ (NSString *)caller;
+ (OITSUBacktrace *)callee;

- (void)dealloc;
- (OITSUBacktrace *)init;
- (char)isEqual:(NSObject *)arg0;
- (OITSUBacktrace *)initWithAdjustment:(int)arg0;
- (NSObject *)callerAtIndex:(int)arg0;
- (NSString *)caller;
- (id)callee;
- (NSString *)backtraceString;

@end
