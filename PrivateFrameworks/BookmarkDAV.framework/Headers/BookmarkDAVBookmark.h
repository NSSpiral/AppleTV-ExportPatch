/* Runtime dump - BookmarkDAVBookmark
 * Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVBookmark : NSObject <CoreDAVLeafDataPayload, NSXMLParserDelegate>
{
    NSURL * _bookmarkURL;
    NSURL * _serverID;
    NSString * _name;
    NSString * _syncKey;
    NSMutableString * _appleAttributeString;
    NSDictionary * _appleAttributes;
    int _parseState;
    int _ignoreLevel;
    CoreDAVErrorItem * _bulkUploadErrorItem;
}

@property (readonly, retain, nonatomic) NSURL * bookmarkURL;
@property (readonly, retain, nonatomic) NSString * name;
@property (readonly, retain, nonatomic) NSDictionary * appleAttributes;
@property (retain, nonatomic) CoreDAVErrorItem * bulkUploadErrorItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) NSURL * serverID;
@property (readonly, nonatomic) NSData * dataPayload;
@property (readonly, nonatomic) NSString * syncKey;
@property (readonly, nonatomic) NSArray * childrenOrder;

- (void)dealloc;
- (NSString *)name;
- (NSURL *)serverID;
- (void)setServerID:(NSURL *)arg0;
- (void)setPropertiesFromXBEL:(id)arg0;
- (BookmarkDAVBookmark *)initWithBookmarkURL:(NSURL *)arg0 serverID:(NSURL *)arg1 name:(NSString *)arg2 syncKey:(NSString *)arg3 appleAttributes:(NSDictionary *)arg4;
- (NSURL *)bookmarkURL;
- (NSDictionary *)appleAttributes;
- (CoreDAVErrorItem *)bulkUploadErrorItem;
- (void)setBulkUploadErrorItem:(CoreDAVErrorItem *)arg0;
- (BookmarkDAVBookmark *)initWithURL:(NSURL *)arg0 eTag:(NSString *)arg1 dataPayload:(NSData *)arg2 inContainerWithURL:(NSURL *)arg3 withAccountInfoProvider:(NSDictionary *)arg4;
- (NSData *)dataPayload;
- (NSString *)syncKey;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (void)parser:(NSXMLParser *)arg0 foundCDATA:(NSData *)arg1;

@end
