/* Runtime dump - CoreDAVContainer
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainer : NSObject
{
    char _isUnauthenticated;
    NSURL * _url;
    CoreDAVResourceTypeItem * _resourceType;
    NSString * _containerTitle;
    NSSet * _privileges;
    NSString * _pushKey;
    NSDictionary * _pushTransports;
    NSURL * _resourceID;
    CoreDAVSupportedReportSetItem * _supportedReportSetItem;
    NSString * _quotaAvailable;
    NSString * _quotaUsed;
    NSURL * _owner;
    NSURL * _addMemberURL;
    NSDictionary * _bulkRequests;
    NSString * _syncToken;
}

@property (retain, nonatomic) NSURL * url;
@property (nonatomic) char isUnauthenticated;
@property (retain, nonatomic) CoreDAVResourceTypeItem * resourceType;
@property (retain, nonatomic) NSString * containerTitle;
@property (retain, nonatomic) NSSet * privileges;
@property (retain, nonatomic) NSString * pushKey;
@property (retain, nonatomic) NSDictionary * pushTransports;
@property (retain, nonatomic) NSURL * resourceID;
@property (retain, nonatomic) NSString * quotaAvailable;
@property (retain, nonatomic) NSString * quotaUsed;
@property (readonly, nonatomic) NSSet * supportedReports;
@property (retain, nonatomic) NSURL * owner;
@property (retain, nonatomic) NSURL * addMemberURL;
@property (retain, nonatomic) NSDictionary * bulkRequests;
@property (retain, nonatomic) NSString * syncToken;
@property (readonly, nonatomic) NSSet * resourceTypeAsStringSet;
@property (readonly, nonatomic) char isPrincipal;
@property (readonly, nonatomic) NSSet * privilegesAsStringSet;
@property (readonly, nonatomic) char hasReadPrivileges;
@property (readonly, nonatomic) char hasWriteContentPrivileges;
@property (readonly, nonatomic) char hasWritePropertiesPrivileges;
@property (readonly, nonatomic) char hasBindPrivileges;
@property (readonly, nonatomic) char hasUnbindPrivileges;
@property (readonly, nonatomic) NSSet * supportedReportsAsStringSet;
@property (readonly, nonatomic) char supportsPrincipalPropertySearchReport;
@property (readonly, nonatomic) char supportsSyncCollectionReport;
@property (retain, nonatomic) CoreDAVSupportedReportSetItem * supportedReportSetItem;

+ (NSObject *)copyPropertyMappingsForParser;
+ (CoreDAVContainer *)convertPushTransportsForNSServerNotificationCenter:(id)arg0;

- (NSDictionary *)bulkRequests;
- (void)setBulkRequests:(NSDictionary *)arg0;
- (NSString *)pushKey;
- (void)setPushKey:(NSString *)arg0;
- (NSURL *)resourceID;
- (void)dealloc;
- (NSString *)description;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (NSURL *)owner;
- (void)setQuotaAvailable:(NSString *)arg0;
- (NSString *)quotaAvailable;
- (void)setResourceType:(CoreDAVResourceTypeItem *)arg0;
- (CoreDAVContainer *)initWithURL:(NSString *)arg0 andProperties:(NSDictionary *)arg1;
- (void)applyParsedProperties:(NSDictionary *)arg0;
- (char)isUnauthenticated;
- (NSString *)containerTitle;
- (NSSet *)privilegesAsStringSet;
- (NSString *)quotaUsed;
- (NSSet *)supportedReportsAsStringSet;
- (NSDictionary *)pushTransports;
- (NSString *)syncToken;
- (void)setIsUnauthenticated:(char)arg0;
- (void)setContainerTitle:(NSString *)arg0;
- (NSSet *)privileges;
- (void)setPrivileges:(NSSet *)arg0;
- (void)setResourceID:(NSURL *)arg0;
- (void)setQuotaUsed:(NSString *)arg0;
- (void)setSupportedReportSetItem:(CoreDAVSupportedReportSetItem *)arg0;
- (void)setAddMemberURL:(NSURL *)arg0;
- (void)setPushTransports:(NSDictionary *)arg0;
- (void)setSyncToken:(NSString *)arg0;
- (CoreDAVSupportedReportSetItem *)supportedReportSetItem;
- (NSSet *)supportedReports;
- (char)_anyPrivilegesMatches:(id)arg0;
- (NSSet *)resourceTypeAsStringSet;
- (char)isPrincipal;
- (char)hasReadPrivileges;
- (char)hasWriteContentPrivileges;
- (char)hasWritePropertiesPrivileges;
- (char)hasBindPrivileges;
- (char)hasUnbindPrivileges;
- (char)supportsPrincipalPropertySearchReport;
- (char)supportsSyncCollectionReport;
- (NSURL *)addMemberURL;
- (CoreDAVResourceTypeItem *)resourceType;
- (void)setOwner:(NSURL *)arg0;

@end
