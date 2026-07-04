/* Runtime dump - BRCItemToPathLookup
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCItemToPathLookup : NSObject
{
    BRCLocalItem * _item;
    BRCServerItem * _serverItem;
    BRCServerZone * _serverZone;
    BRCRelativePath * _parentPath;
    BRCRelativePath * _matchByFileID;
    BRCRelativePath * _matchByDocumentID;
    BRCRelativePath * _matchByEnclosure;
    BRCRelativePath * _matchByPath;
    unsigned long long _parentFileID;
    char _fileSystemIDMayStillExist;
    char _cleanupFaults;
    struct ? _fetched;
}

@property (readonly, nonatomic) BRCRelativePath * byFileSystemID;
@property (readonly, nonatomic) char fileSystemIDMayStillExist;
@property (readonly, nonatomic) BRCRelativePath * parentPath;
@property (readonly, nonatomic) BRCRelativePath * byPath;
@property (readonly, nonatomic) NSURL * coordinationURL;

+ (BRCItemToPathLookup *)_resolveEnclosureWithEnclosureFd:(int)arg0 serverZone:(BRCServerZone *)arg1 expectedDocumentID:(unsigned int)arg2 expectedFileName:(NSString *)arg3 cleanupFaults:(char)arg4;
+ (NSObject *)lookupForItem:(NSObject *)arg0;
+ (NSObject *)lookupForServerItem:(NSObject *)arg0 cleanupFaults:(char)arg1;
+ (NSString *)resolveEnclosureWithPath:(NSString *)arg0 cleanupFaults:(char)arg1;

- (void)dealloc;
- (NSString *)description;
- (BRCItemToPathLookup *)initWithItem:(BRCLocalItem *)arg0;
- (void).cxx_destruct;
- (NSURL *)coordinationURL;
- (BRCRelativePath *)byFileSystemID;
- (void)closePaths;
- (char)_fetchByPath;
- (char)_fetchByFileID;
- (char)_fetchByDocumentID;
- (BRCRelativePath *)byPath;
- (BRCItemToPathLookup *)initWithServerItem:(BRCServerItem *)arg0 cleanupFaults:(char)arg1;
- (void)_fetchParent;
- (BRCRelativePath *)parentPath;
- (char)computeLogicalPath:(id *)arg0 physicalPath:(id *)arg1 isDirectory:(char *)arg2;
- (char)_fetchByEnclosure;
- (char)fileSystemIDMayStillExist;

@end
