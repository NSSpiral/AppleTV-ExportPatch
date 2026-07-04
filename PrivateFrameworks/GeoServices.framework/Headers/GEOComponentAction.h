/* Runtime dump - GEOComponentAction
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComponentAction : PBCodable <NSCopying>
{
    struct ? _actions;
    int _component;
    char _handleLocally;
    struct ? _has;
}

@property (nonatomic) char hasComponent;
@property (nonatomic) int component;
@property (readonly, nonatomic) unsigned int actionsCount;
@property (readonly, nonatomic) int * actions;
@property (nonatomic) char hasHandleLocally;
@property (nonatomic) char handleLocally;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int *)actions;
- (GEOComponentAction *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)actionsCount;
- (void)clearActions;
- (int)actionsAtIndex:(unsigned int)arg0;
- (void)addActions:(int)arg0;
- (void)setComponent:(int)arg0;
- (void)setHasComponent:(char)arg0;
- (char)hasComponent;
- (void)setActions:(int *)arg0 count:(unsigned int)arg1;
- (void)setHandleLocally:(char)arg0;
- (void)setHasHandleLocally:(char)arg0;
- (char)hasHandleLocally;
- (int)component;
- (char)handleLocally;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
