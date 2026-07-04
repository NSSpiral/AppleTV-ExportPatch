/* Runtime dump - PACountedSampleTreeFrame
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PACountedSampleTreeFrame : PACountedSampleFrame
{
    unsigned int _state;
    NSMutableSet * _children;
}

@property (readonly) NSMutableSet * children;
@property (readonly) char isLeafFrame;
@property unsigned int state;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (PACountedSampleTreeFrame *)initWithSampleFrame:(PASampleFrame *)arg0 andState:(unsigned int)arg1;
- (char)isLeafFrame;
- (NSMutableSet *)children;

@end
