/* Runtime dump - CIBurstFaceScoreEntry
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstFaceScoreEntry : NSObject
{
    float maxScore;
    float minScore;
    float sumScores;
    float sumSqScores;
    int numScores;
}

@property float maxScore;
@property float minScore;
@property int numScores;

- (float)computeAverage;
- (CIBurstFaceScoreEntry *)initWithScore:(float)arg0;
- (void)addScore:(float)arg0;
- (float)computeStandardDeviation;
- (float)minScore;
- (void)setMinScore:(float)arg0;
- (int)numScores;
- (void)setNumScores:(int)arg0;
- (float)maxScore;
- (void)setMaxScore:(float)arg0;

@end
