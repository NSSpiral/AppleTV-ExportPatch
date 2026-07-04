/* Runtime dump - BBThumbnailSizeConstraints
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBThumbnailSizeConstraints : NSObject <NSSecureCoding>
{
    int _constraintType;
    float _fixedWidth;
    float _fixedHeight;
    float _fixedDimension;
    float _minAspectRatio;
    float _maxAspectRatio;
    float _thumbnailScale;
}

@property (nonatomic) int constraintType;
@property (nonatomic) float fixedWidth;
@property (nonatomic) float fixedHeight;
@property (nonatomic) float fixedDimension;
@property (nonatomic) float minAspectRatio;
@property (nonatomic) float maxAspectRatio;
@property (nonatomic) float thumbnailScale;

+ (char)supportsSecureCoding;

- (BBThumbnailSizeConstraints *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (char)areReasonable;
- (int)constraintType;
- (float)minAspectRatio;
- (float)maxAspectRatio;
- (float)fixedWidth;
- (float)fixedHeight;
- (float)fixedDimension;
- (void)setConstraintType:(int)arg0;
- (void)setFixedWidth:(float)arg0;
- (void)setFixedHeight:(float)arg0;
- (void)setFixedDimension:(float)arg0;
- (void)setMinAspectRatio:(float)arg0;
- (void)setMaxAspectRatio:(float)arg0;
- (void)setThumbnailScale:(float)arg0;
- (float)thumbnailScale;

@end
