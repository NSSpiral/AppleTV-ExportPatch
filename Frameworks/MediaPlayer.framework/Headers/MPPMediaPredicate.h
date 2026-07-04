/* Runtime dump - MPPMediaPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPMediaPredicate : PBCodable <NSCopying>
{
    MPPCompoundPredicate * _compoundPredicate;
    MPPConditionalPredicate * _conditionalPredicate;
    MPPPersistentIDsPredicate * _persistentIDsPredicate;
    MPPPropertyPredicate * _propertyPredicate;
    MPPSearchStringPredicate * _searchStringPredicate;
    int _type;
    struct ? _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasPropertyPredicate;
@property (retain, nonatomic) MPPPropertyPredicate * propertyPredicate;
@property (readonly, nonatomic) char hasCompoundPredicate;
@property (retain, nonatomic) MPPCompoundPredicate * compoundPredicate;
@property (readonly, nonatomic) char hasConditionalPredicate;
@property (retain, nonatomic) MPPConditionalPredicate * conditionalPredicate;
@property (readonly, nonatomic) char hasPersistentIDsPredicate;
@property (retain, nonatomic) MPPPersistentIDsPredicate * persistentIDsPredicate;
@property (readonly, nonatomic) char hasSearchStringPredicate;
@property (retain, nonatomic) MPPSearchStringPredicate * searchStringPredicate;

- (MPPPropertyPredicate *)propertyPredicate;
- (void)setPropertyPredicate:(MPPPropertyPredicate *)arg0;
- (MPPConditionalPredicate *)conditionalPredicate;
- (char)hasConditionalPredicate;
- (void)setConditionalPredicate:(MPPConditionalPredicate *)arg0;
- (MPPCompoundPredicate *)compoundPredicate;
- (void)setCompoundPredicate:(MPPCompoundPredicate *)arg0;
- (MPPPersistentIDsPredicate *)persistentIDsPredicate;
- (void)setPersistentIDsPredicate:(MPPPersistentIDsPredicate *)arg0;
- (MPPSearchStringPredicate *)searchStringPredicate;
- (void)setSearchStringPredicate:(MPPSearchStringPredicate *)arg0;
- (char)hasPropertyPredicate;
- (char)hasCompoundPredicate;
- (char)hasPersistentIDsPredicate;
- (char)hasSearchStringPredicate;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (MPPMediaPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
