/* Runtime dump - TSDMediaInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaInfo : TSDStyledInfo
{
    struct CGSize mOriginalSize;
    struct ? mFlags;
}

@property (nonatomic) struct CGSize originalSize;
@property (readonly, nonatomic) struct CGSize defaultOriginalSize;
@property (nonatomic) char isPlaceholder;
@property (nonatomic) char wasMediaReplaced;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) NSString * mediaDisplayName;
@property (readonly, nonatomic) NSString * mediaFileType;
@property (readonly, nonatomic) struct CGSize rawDataSize;

- (NSString *)copyWithContext:(NSObject *)arg0;
- (TSDMediaInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1;
- (struct CGSize)defaultOriginalSize;
- (void)setOriginalSize:(struct CGSize)arg0;
- (struct CGSize)originalSize;
- (char)wasMediaReplaced;
- (NSString *)mediaDisplayName;
- (struct CGSize)rawDataSize;
- (struct CGPoint)centerForReplacingWithNewMedia;
- (void)updateGeometryToReplaceMediaInfo:(NSDictionary *)arg0;
- (NSObject *)propertyNameForFlagsCommand;
- (NSObject *)propertyNameForOriginalSizeCommand;
- (void)setWasMediaReplaced:(char)arg0;
- (void)takePropertiesFromReplacedMediaInfo:(NSDictionary *)arg0;
- (NSString *)mediaFileType;
- (void)setFlags:(unsigned int)arg0;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (unsigned int)flags;
- (char)isPlaceholder;
- (void)setIsPlaceholder:(char)arg0;

@end
