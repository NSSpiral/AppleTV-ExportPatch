/* Runtime dump - PACountedFrame
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PACountedFrame : NSObject
{
    unsigned int _count;
}

@property unsigned int count;

- (unsigned int)count;
- (NSString *)debugDescription;
- (void)setCount:(unsigned int)arg0;

@end
