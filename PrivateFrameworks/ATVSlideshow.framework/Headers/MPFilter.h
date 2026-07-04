/* Runtime dump - MPFilter
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPFilter : NSObject <NSCoding, NSCopying, MPAnimationSupport>
{
    NSMutableDictionary * _attributes;
    NSMutableDictionary * _animationPaths;
    MCFilter * _filter;
    NSObject<MPFilterSupport> * _parent;
    MPFilterInternal * _internal;
}

@property (copy, nonatomic) NSString * filterID;
@property (copy, nonatomic) NSString * presetID;

+ (MPFilter *)filterWithFilterID:(NSString *)arg0;

- (void)setDefaults;
- (void)dealloc;
- (MPFilter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPFilter *)init;
- (NSString *)description;
- (MPFilter *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFilter:(MCFilter *)arg0;
- (int)index;
- (MPDocument *)parentDocument;
- (NSObject *)convertMPAttributeToMCAttribute:(NSObject *)arg0 withKey:(NSString *)arg1;
- (NSString *)fullDebugLog;
- (NSMutableDictionary *)animationPaths;
- (void)copyAnimationPaths:(NSArray *)arg0;
- (void)removeAnimationPathForKey:(NSString *)arg0;
- (NSString *)animationPathForKey:(NSString *)arg0;
- (void)setAnimationPath:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)copyStruct:(id)arg0;
- (NSString *)presetID;
- (void)setPresetID:(NSString *)arg0;
- (NSString *)filterID;
- (void)setFilterID:(NSString *)arg0;
- (MPFilter *)initWithFilterID:(NSString *)arg0;
- (NSDictionary *)filterAttributes;
- (NSString *)filterAttributeForKey:(NSString *)arg0;
- (void)setFilterAttribute:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSObject *)convertMCAttributeToMPAttribute:(NSObject *)arg0 withKey:(NSString *)arg1;
- (void)dump;
- (MCFilter *)filter;
- (NSObject<MPFilterSupport> *)parent;
- (void)setParent:(NSObject<MPFilterSupport> *)arg0;
- (void)finalize;

@end
