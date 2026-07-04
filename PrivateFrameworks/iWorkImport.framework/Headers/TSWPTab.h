/* Runtime dump - TSWPTab
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTab : NSObject <NSCopying>
{
    float _position;
    int _alignment;
    NSString * _leader;
}

@property (nonatomic) float position;
@property (nonatomic) int alignment;
@property (copy, nonatomic) NSString * leader;

+ (UISegmentedControl *)tab;
+ (NSString *)tabLeaderFromDisplayString:(NSString *)arg0;
+ (int)tabAlignmentFromString:(NSString *)arg0 isRTL:(char)arg1;
+ (TSWPTab *)stringFromTabAlignment:(int)arg0 isRTL:(char)arg1;
+ (TSWPTab *)displayStringFromTabLeader:(id)arg0;

- (NSString *)leader;
- (void)saveToArchive:(struct TabArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPTab *)initWithArchive:(struct TabArchive *)arg0 unarchiver:(struct TabArchive)arg1;
- (TSWPTab *)initWithPosition:(float)arg0 alignment:(int)arg1 leader:(NSString *)arg2;
- (int)compareToPosition:(float)arg0;
- (float)positionInInches;
- (void)setPositionInInches:(float)arg0;
- (char)isEqualToPosition:(float)arg0;
- (void)setLeader:(NSString *)arg0;
- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (TSWPTab *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (TSWPTab *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPosition:(float)arg0;
- (float)position;
- (int)alignment;

@end
