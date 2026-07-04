/* Runtime dump - FBSDisplay
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplay : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>
{
    CADisplay * _caDisplay;
    float _scale;
    unsigned int _type;
    int _tags;
    unsigned int _seed;
    struct CGRect _referenceBounds;
}

@property (readonly, retain, nonatomic) CADisplay * caDisplay;
@property (nonatomic) float scale;
@property (readonly, nonatomic) float orientation;
@property (nonatomic) struct CGRect referenceBounds;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) int tags;
@property (nonatomic) unsigned int seed;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (NSObject *)_CADisplayForId:(unsigned int)arg0;

- (UIScreen *)_screen;
- (void)setSeed:(unsigned int)arg0;
- (FBSDisplay *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (FBSDisplay *)initWithCADisplay:(NSObject *)arg0 isMainDisplay:(char)arg1;
- (char)isMainDisplay;
- (float)orientation;
- (float)scale;
- (unsigned int)type;
- (FBSDisplay *)copyWithZone:(struct _NSZone *)arg0;
- (char)isCarDisplay;
- (CADisplay *)caDisplay;
- (void)setScale:(float)arg0;
- (int)tags;
- (char)isWatchOnlyDisplay;
- (unsigned int)seed;
- (char)isExternal;
- (FBSDisplay *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)setConnected:(char)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (NSObject *)_nameForDisplayType;
- (char)isHiddenDisplay;
- (char)isAirPlayDisplay;
- (FBSDisplay *)initWithCADisplay:(NSObject *)arg0 isMainDisplay:(char)arg1 seed:(unsigned int)arg2 tags:(int)arg3 scale:(float)arg4;
- (unsigned int)_typeFromTags:(unsigned int)arg0;
- (char)isiPodOnlyDisplay;
- (char)isMusicOnlyDisplay;
- (FBSDisplay *)initWithCADisplay:(NSObject *)arg0;
- (struct CGRect)referenceBounds;
- (void)setReferenceBounds:(struct CGRect)arg0;
- (char)isConnected;

@end
