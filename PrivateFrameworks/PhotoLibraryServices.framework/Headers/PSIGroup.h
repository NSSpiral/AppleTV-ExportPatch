/* Runtime dump - PSIGroup
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroup : PSIReusableObject
{
    NSMutableString * _contentString;
    id _compressedRanges;
    id _tokenRanges;
    unsigned int _tokenRangesCount;
    short _category;
    struct __CFArray * _assetIds;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
}

@property (nonatomic) unsigned long long groupId;
@property (nonatomic) unsigned long long owningGroupId;
@property (nonatomic) short category;
@property (readonly, retain, nonatomic) NSString * contentString;
@property (retain, nonatomic) struct __CFArray * assetIds;

+ (void)_getTokenRanges:(NSArray *)arg0 fromCompressedRanges:(struct _NSRange)arg1;
+ (void)getCompressedRanges:(NSArray *)arg0 fromTokenRanges:(unsigned long long)arg1 count:(NSObject *)arg2;

- (void)dealloc;
- (PSIGroup *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setCategory:(short)arg0;
- (short)category;
- (void)prepareForReuse;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg0;
- (int)compareToGroup:(NSObject *)arg0;
- (unsigned int)tokenRangesCount;
- (struct _NSRange)tokenRangeAtIndex:(unsigned int)arg0;
- (unsigned long long)groupId;
- (void)setGroupId:(unsigned long long)arg0;
- (unsigned long long)owningGroupId;
- (void)setOwningGroupId:(unsigned long long)arg0;
- (NSString *)contentString;
- (struct __CFArray *)assetIds;
- (void)setAssetIds:(struct __CFArray *)arg0;

@end
