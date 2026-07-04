/* Runtime dump - BookmarkDAVFolder
 * Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload>
{
    NSDictionary * _appleAttributes;
    NSMutableArray * _childrenOrder;
    NSString * _bulkParsedCTag;
    NSString * _bulkParsedPTag;
    CoreDAVErrorItem * _bulkUploadErrorItem;
}

@property (nonatomic) char isBookmarkFolder;
@property (nonatomic) char isBookmarkBarFolder;
@property (nonatomic) char isBookmarkMenuFolder;
@property (readonly, nonatomic) NSDictionary * appleAttributes;
@property (retain, nonatomic) NSString * bulkParsedCTag;
@property (retain, nonatomic) NSString * bulkParsedPTag;
@property (readonly, nonatomic) NSArray * childrenOrder;
@property (retain, nonatomic) CoreDAVErrorItem * bulkUploadErrorItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) NSURL * serverID;
@property (readonly, nonatomic) NSData * dataPayload;
@property (readonly, nonatomic) NSString * syncKey;

+ (NSObject *)copyPropertyMappingsForParser;

- (void)dealloc;
- (NSURL *)serverID;
- (void)setServerID:(NSURL *)arg0;
- (NSDictionary *)appleAttributes;
- (CoreDAVErrorItem *)bulkUploadErrorItem;
- (void)setBulkUploadErrorItem:(CoreDAVErrorItem *)arg0;
- (BookmarkDAVFolder *)initWithServerID:(NSURL *)arg0 containerName:(NSString *)arg1 appleAttributes:(NSDictionary *)arg2;
- (void)setBulkParsedCTag:(NSString *)arg0;
- (void)setBulkParsedPTag:(NSString *)arg0;
- (void)_faultResourceType;
- (NSString *)_appleAttributesString;
- (char)isBookmarkFolder;
- (char)isBookmarkBarFolder;
- (char)isBookmarkMenuFolder;
- (void)setIsBookmarkFolder:(char)arg0;
- (void)setIsBookmarkBarFolder:(char)arg0;
- (void)setIsBookmarkMenuFolder:(char)arg0;
- (NSString *)bulkParsedCTag;
- (NSString *)bulkParsedPTag;
- (void)applyParsedProperties:(NSDictionary *)arg0;
- (BookmarkDAVFolder *)initWithURL:(NSURL *)arg0 eTag:(NSString *)arg1 dataPayload:(NSData *)arg2 inContainerWithURL:(NSURL *)arg3 withAccountInfoProvider:(NSDictionary *)arg4;
- (NSData *)dataPayload;
- (NSArray *)childrenOrder;
- (CoreDAVMkcolTask *)copyMkcolTask;
- (CoreDAVPropPatchTask *)copyPropPatchTask;
- (NSString *)syncKey;

@end
