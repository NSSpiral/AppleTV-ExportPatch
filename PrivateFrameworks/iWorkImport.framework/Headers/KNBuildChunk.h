/* Runtime dump - KNBuildChunk
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildChunk : TSPObject <KNInspectableAnimation, NSCopying>
{
    NSUUID * _buildId;
    KNBuildChunkIdentifier * _buildChunkIdentifier;
    double _delay;
    double _duration;
    char _automatic;
    unsigned int _referent;
    unsigned int _cachedIndexOnSlide;
    unsigned int _cachedActiveIndexOnSlide;
    unsigned int _cachedIndexInBuild;
    TSPLazyReference * _buildReference;
    char _needsAutomaticFromBuildAttributes;
    char _needsReferentFromBuildAttributes;
    char _needsDelayFromBuildAttributes;
    char _needsDurationFromBuildAttributes;
}

@property (readonly, nonatomic) NSUUID * i_buildId;
@property (readonly, nonatomic) KNBuildChunkIdentifier * chunkIdentifier;
@property (readonly, nonatomic) KNBuild * build;
@property (readonly, nonatomic) unsigned int indexInBuild;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) char automatic;
@property (nonatomic) unsigned int referent;
@property (readonly, nonatomic) unsigned int indexOnSlide;
@property (readonly, nonatomic) unsigned int deliveryGroupIndex;
@property (readonly, nonatomic) char isFirstInBuild;
@property (readonly, nonatomic) char isFirstOnSlide;
@property (readonly, nonatomic) char isFirstInDeliveryGroup;
@property (readonly, nonatomic) char active;
@property (readonly, nonatomic) unsigned int activeIndexOnSlide;
@property (readonly, nonatomic) char automaticWithPreviousChunk;
@property (readonly, nonatomic) char automaticWithPreviousChunkOnSameDrawable;
@property (readonly, nonatomic) unsigned int eventTrigger;
@property (readonly, nonatomic) NSArray * availableEventTriggers;
@property (readonly, nonatomic) char supportsWithStart;
@property (readonly, nonatomic) char hasComplement;
@property (readonly, nonatomic) NSString * title;
@property (readonly, nonatomic) KNSlide * slide;
@property (readonly, nonatomic) NSSet * inspectableAttributes;
@property (readonly, nonatomic) char canEditAnimations;

+ (char)needsObjectUUID;

- (KNBuildChunk *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct BuildChunkArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct BuildChunkArchive *)arg0 unarchiver:(struct BuildChunkArchive)arg1;
- (void)i_invalidateChunkIndexInBuildCache;
- (unsigned int)indexInBuild;
- (unsigned int)indexOnSlide;
- (char)isFirstInBuild;
- (char)isAutomaticWithPreviousChunk;
- (char)isFirstInDeliveryGroup;
- (KNBuildChunkIdentifier *)chunkIdentifier;
- (char)hasComplement;
- (void)setReferent:(unsigned int)arg0;
- (void)didLoadBuild:(id)arg0;
- (void)p_setDelayFromBuildAttributes:(NSDictionary *)arg0 withReferent:(unsigned int)arg1 automatic:(char)arg2;
- (void)p_setDurationFromBuildAttributes:(NSDictionary *)arg0;
- (unsigned int)referent;
- (void)i_setBuild:(id)arg0;
- (KNBuildChunk *)initWithBuild:(KNBuild *)arg0;
- (KNBuildChunk *)initWithBuild:(KNBuild *)arg0 copyingAttributesFromChunk:(id)arg1;
- (char)p_canBuildWithChunk:(KNBuildChunk *)arg0 checkOtherChunksBuildingWithThisChunk:(char)arg1;
- (char)p_chunksBuildingWithThisChunkCanBuildWithChunk:(id)arg0;
- (id)p_chunksBuildingWithThisChunk;
- (id)previousChunkOnSlide;
- (char)canBuildWithChunk:(KNBuildChunk *)arg0;
- (char)supportsWithStart;
- (NSObject *)p_stringRepresentationWithNotAvailableForIndex:(unsigned int)arg0;
- (char)canEditAnimations;
- (NSSet *)inspectableAttributes;
- (KNBuildChunk *)initWithBuild:(KNBuild *)arg0 referent:(unsigned int)arg1 copyingRemainingAttributesFromChunk:(id)arg2;
- (char)isAutomaticWithPreviousChunkOnSameDrawable;
- (id)nextChunkOnSlide;
- (NSArray *)availableEventTriggers;
- (unsigned int)deliveryGroupIndex;
- (char)isFirstOnSlide;
- (unsigned int)activeIndexOnSlide;
- (char)isComplementOfBuildChunk:(id)arg0;
- (id)p_stringForReferent:(unsigned int)arg0;
- (void)i_clearChunkIdentifier;
- (void)i_setChunkIdentifier:(NSString *)arg0;
- (void)i_setBuildId:(NSObject *)arg0;
- (NSUUID *)i_buildId;
- (void)i_correctChunkIdentifierToPointAtBuild:(id)arg0;
- (KNBuild *)build;
- (void)dealloc;
- (NSString *)description;
- (double)duration;
- (char)isActive;
- (void)setDuration:(double)arg0;
- (void)setDelay:(double)arg0;
- (NSString *)title;
- (double)delay;
- (KNBuildChunk *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)eventTrigger;
- (char)isAutomatic;
- (void)setAutomatic:(char)arg0;
- (KNSlide *)slide;

@end
