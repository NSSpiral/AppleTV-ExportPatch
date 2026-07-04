/* Runtime dump - SsixEntry
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface SsixEntry : NSObject
{
    unsigned int _moofAndIFrameSize;
    unsigned int _moofAndMdatSize;
    double _subsegmentDuration;
}

@property (nonatomic) unsigned int moofAndIFrameSize;
@property (nonatomic) unsigned int moofAndMdatSize;
@property (nonatomic) double subsegmentDuration;

- (unsigned int)moofAndIFrameSize;
- (void)setMoofAndIFrameSize:(unsigned int)arg0;
- (unsigned int)moofAndMdatSize;
- (void)setMoofAndMdatSize:(unsigned int)arg0;
- (double)subsegmentDuration;
- (void)setSubsegmentDuration:(double)arg0;

@end
