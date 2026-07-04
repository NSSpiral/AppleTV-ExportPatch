/* Runtime dump - PACSSymbolOwnerWrapper
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PACSSymbolOwnerWrapper : PACSRefWrapper
{
    NSString * _path;
}

@property (readonly) NSString * path;

- (void)dealloc;
- (NSString *)debugDescription;
- (NSString *)path;
- (PACSSymbolOwnerWrapper *)initWithSymbolOwner:(struct _CSTypeRef)arg0;
- (PACSSymbolOwnerWrapper *)initWithSymbolOwner:(struct _CSTypeRef)arg0 andPath:(NSString *)arg1;

@end
