/* Runtime dump - FKTextFeature
 * Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface FKTextFeature : NSObject
{
    int _featureID;
    NSArray * _corners;
    int _type;
    NSArray * _subFeatures;
    struct CGRect _boundingBox;
}

@property (readonly, nonatomic) int featureID;
@property (readonly, nonatomic) struct CGRect boundingBox;
@property (readonly, retain, nonatomic) NSArray * corners;
@property (readonly, nonatomic) int type;
@property (retain, nonatomic) NSArray * subFeatures;

+ (FKTextFeature *)featureFromConcomp:(struct concomp *)arg0 session:(NSObject *)arg1 roiOffset:(NSSet *)arg2 dimensions:(char)arg3 type:(int)arg4 createDiacriticFeatures:(id)arg5 featureID:(struct ? *)arg6;
+ (NSObject *)featureFromSequenceIndex:(int)arg0 session:(struct ? *)arg1 roiOffset:(int)arg2 dimensions:(int)arg3 createConcompFeatures:(int)arg4 createDiacriticFeatures:(struct concomp *)arg5 featureID:(int)arg6;

- (void)dealloc;
- (int)type;
- (NSArray *)corners;
- (struct CGRect)boundingBox;
- (NSArray *)subFeatures;
- (FKTextFeature *)initWithType:(int)arg0 boundingBox:(struct CGRect)arg1 corners:(struct CGSize)arg2 featureID:(int)arg3;
- (void)setSubFeatures:(NSArray *)arg0;
- (int)featureID;

@end
