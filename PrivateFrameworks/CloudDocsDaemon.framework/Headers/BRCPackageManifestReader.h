/* Runtime dump - BRCPackageManifestReader
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPackageManifestReader : NSEnumerator
{
    NSInputStream * _stream;
    PBMessageStreamReader * _reader;
}

@property (nonatomic) Class itemClass;

- (void)dealloc;
- (NSObject *)nextObject;
- (void)setItemClass:(Class)arg0;
- (Class)itemClass;
- (BRCPackageManifestReader *)initWithURL:(NSString *)arg0;
- (void)done;
- (BRCPackageManifestReader *)initWithAsset:(NSSet *)arg0;
- (void).cxx_destruct;
- (BRCPackageManifestReader *)initWithInputStream:(NSObject *)arg0;
- (BRCPackageManifestReader *)initWithDeviceID:(int)arg0 fileID:(unsigned long long)arg1;

@end
