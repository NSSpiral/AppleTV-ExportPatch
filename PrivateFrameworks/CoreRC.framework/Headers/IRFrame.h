/* Runtime dump - IRFrame
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRFrame : NSObject
{
    unsigned int * _timings;
    unsigned int _count;
    unsigned long long _timestamp;
}

@property (readonly, nonatomic) unsigned int count;
@property (nonatomic) unsigned long long timestamp;

- (void)dealloc;
- (unsigned int)count;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg0;
- (IRFrame *)initWithTimings:(unsigned int *)arg0 count:(unsigned int)arg1;
- (unsigned int)timeIntervalAtIndex:(unsigned int)arg0;
- (void)getTimings:(unsigned int *)arg0 range:(struct _NSRange)arg1;

@end
