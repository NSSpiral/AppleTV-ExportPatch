/* Runtime dump - MPAnimationKeyframe
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationKeyframe : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary * _attributes;
    MPAnimationPath * _parentPath;
    MCAnimationKeyframe * _keyframe;
    double _time;
    unsigned int _offsetType;
    double _preControl;
    double _postControl;
}

@property (nonatomic) double time;
@property (nonatomic) unsigned int offsetType;
@property (nonatomic) double preControl;
@property (nonatomic) double postControl;

- (void)dealloc;
- (MPAnimationKeyframe *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPAnimationKeyframe *)init;
- (MPAnimationKeyframe *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTime:(double)arg0;
- (double)time;
- (MPDocument *)parentDocument;
- (void)copyVars:(id)arg0;
- (void)setPreControl:(double)arg0;
- (void)setPostControl:(double)arg0;
- (void)setOffsetType:(unsigned int)arg0;
- (double)preControl;
- (double)postControl;
- (unsigned int)offsetType;
- (NSString *)fullDebugLog;
- (int)relativeTimeCompare:(NSObject *)arg0;
- (void)setParentPath:(MPAnimationPath *)arg0;
- (void)setKeyframe:(MCAnimationKeyframe *)arg0;
- (MPAnimationPath *)parentPath;
- (void)dump;

@end
