/* Runtime dump - PACSRefWrapper
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PACSRefWrapper : NSObject
{
    struct _CSTypeRef _csRef;
}

@property (readonly) struct _CSTypeRef csRef;

- (void)dealloc;
- (PACSRefWrapper *)initWithCSTypeRef:(struct _CSTypeRef)arg0;
- (struct _CSTypeRef)csRef;

@end
