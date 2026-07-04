/* Runtime dump - BRCProgress
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCProgress : NSProgress
{
    NSMutableDictionary * _progressByAliasContainerID;
    char _isPublished;
}

+ (NSObject *)progressWithBRCDocumentItem:(NSObject *)arg0 totalSize:(long long)arg1 kind:(TSCH3DAxisLabelKind *)arg2;
+ (NSObject *)downloadProgressWithBRCDocumentItem:(NSObject *)arg0;
+ (NSObject *)uploadProgressWithBRCDocumentItem:(NSObject *)arg0 transferSize:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)brc_publish;
- (void)brc_unpublish;
- (void)addAliasItem:(NSObject *)arg0;
- (void)setCompletedUnitCount:(long long)arg0;

@end
