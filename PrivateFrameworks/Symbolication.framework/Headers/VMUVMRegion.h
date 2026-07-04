/* Runtime dump - VMUVMRegion
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUVMRegion : NSObject
{
    struct _VMURange range;
    unsigned int prot;
    unsigned int maxProt;
    NSString * type;
    NSString * path;
    char summarized;
    char recalculate_pages_resident;
    unsigned char external_pager;
    unsigned char share_mode;
    int purgeable;
    unsigned int virtual_pages;
    unsigned int pages_resident;
    unsigned int pages_shared_now_private;
    unsigned int pages_swapped_out;
    unsigned int pages_dirtied;
    unsigned int ref_count;
    unsigned int user_tag;
    unsigned int object_id;
    unsigned int nesting_depth;
    char is_submap;
    unsigned int mallocBlockCount;
    unsigned int mallocTypeFlag;
    unsigned int pages_purgable_vol;
    unsigned int pages_purgable_non_vol;
    unsigned int pages_purgable_empty;
}

+ (NSDictionary *)columnHeadersWithOptions:(unsigned int)arg0 maximumLength:(unsigned int)arg1;

- (void)dealloc;
- (VMUVMRegion *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)type;
- (NSString *)path;
- (struct _VMURange)range;
- (unsigned int)protection;
- (NSDictionary *)descriptionWithOptions:(unsigned int)arg0 maximumLength:(unsigned int)arg1;
- (void)addInfoFromRegion:(NSObject *)arg0;
- (char)hasSameInfoAsRegion:(NSObject *)arg0;
- (id)breakAtLength:(unsigned long long)arg0;
- (unsigned int)maxProtection;
- (unsigned int)virtualPageCount;
- (unsigned int)residentPageCount;
- (unsigned int)dirtyPageCount;
- (unsigned int)sharedNowPrivatePageCount;
- (unsigned int)swappedOutPageCount;
- (unsigned int)purgeablePageCount;
- (char)isSubmap;

@end
