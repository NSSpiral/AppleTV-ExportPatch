/* Runtime dump - BRCPathToItemLookup
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPathToItemLookup : NSObject
{
    BRCRelativePath * _pathOfItem;
    BRCRelativePath * _relpathOfFSEvent;
    BRCLocalItem * _matchByFileID;
    BRCDocumentItem * _matchByDocumentID;
    BRCLocalItem * _matchByPath;
    BRCServerItem * _serverItem;
    BRCServerItem * _serverByPath;
    BRCPackageItem * _packageItem;
    BRCItemID * _parentID;
    struct ? _fetched;
}

@property (readonly, nonatomic) BRCRelativePath * relpathOfItem;
@property (readonly, nonatomic) BRCRelativePath * relpathOfFSEvent;
@property (readonly, nonatomic) BRCLocalItem * byPath;
@property (retain, nonatomic) BRCLocalItem * byFileID;
@property (retain, nonatomic) BRCDocumentItem * byDocumentID;
@property (readonly, nonatomic) BRCServerItem * serverByPath;
@property (readonly, nonatomic) BRCItemID * parentID;

+ (NSString *)lookupForRelativePath:(NSString *)arg0;

- (NSString *)description;
- (void).cxx_destruct;
- (BRCItemID *)parentID;
- (BRCPathToItemLookup *)initWithRelativePath:(NSString *)arg0;
- (char)_fetchByPath;
- (char)_fetchByFileID;
- (char)_fetchByDocumentID;
- (void)setByFileID:(BRCLocalItem *)arg0;
- (void)setByDocumentID:(BRCDocumentItem *)arg0;
- (BRCLocalItem *)byPath;
- (BRCLocalItem *)byFileID;
- (BRCDocumentItem *)byDocumentID;
- (BRCServerItem *)serverByPath;
- (BRCRelativePath *)relpathOfItem;
- (BRCRelativePath *)relpathOfFSEvent;

@end
