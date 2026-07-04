/* Runtime dump - HAPOSTransaction
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPOSTransaction : NSObject
{
    double _creationTime;
}

@property (nonatomic) double creationTime;

- (void)dealloc;
- (HAPOSTransaction *)init;
- (HAPOSTransaction *)initWithName:(NSString *)arg0;
- (double)creationTime;
- (void)setCreationTime:(double)arg0;

@end
