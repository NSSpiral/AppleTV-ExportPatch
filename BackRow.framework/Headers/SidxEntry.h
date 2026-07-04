/* Runtime dump - SidxEntry
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface SidxEntry : NSObject
{
    unsigned int _referenceType;
    unsigned int _referencedSize;
    double _subsegmentDuration;
}

@property (nonatomic) unsigned int referenceType;
@property (nonatomic) unsigned int referencedSize;
@property (nonatomic) double subsegmentDuration;

- (double)subsegmentDuration;
- (void)setSubsegmentDuration:(double)arg0;
- (unsigned int)referenceType;
- (void)setReferenceType:(unsigned int)arg0;
- (unsigned int)referencedSize;
- (void)setReferencedSize:(unsigned int)arg0;

@end
