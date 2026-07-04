/* Runtime dump - VKMapSnapshotRequest
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshotRequest : NSObject
{
    int _mapType;
    unsigned int _scale;
    NSLocale * _locale;
    unsigned int _tileGroupID;
    struct CGSize _size;
    struct ? _region;
}

@property (nonatomic) struct ? region;
@property (nonatomic) int mapType;
@property (nonatomic) struct CGSize size;
@property (nonatomic) unsigned int scale;
@property (retain, nonatomic) NSLocale * locale;
@property (nonatomic) unsigned int tileGroupID;

- (struct CGSize)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)scale;
- (void)setSize:(struct CGSize)arg0;
- (void)setScale:(unsigned int)arg0;
- (void)setLocale:(NSLocale *)arg0;
- (void).cxx_construct;
- (NSLocale *)locale;
- (void)setRegion:(struct ?)arg0;
- (struct ?)region;
- (int)mapType;
- (void)setMapType:(int)arg0;
- (unsigned int)tileGroupID;
- (void)setTileGroupID:(unsigned int)arg0;
- (struct VKRequestKey)_requestKey;

@end
