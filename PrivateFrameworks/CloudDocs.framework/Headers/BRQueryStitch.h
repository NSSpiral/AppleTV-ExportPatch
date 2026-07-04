/* Runtime dump - BRQueryStitch
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQueryStitch : NSObject
{
    NSArray * _queries;
    NSNumber * _objid;
    char _kind;
    NSURL * _fromURL;
    NSURL * _url;
}

@property (retain, nonatomic) NSURL * fromURL;
@property (retain, nonatomic) NSArray * queries;

- (void)dealloc;
- (NSString *)description;
- (void)done;
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)_creationDone;
- (void)_renameDone;
- (void)_deletionDone;
- (BRQueryStitch *)initWithURL:(NSString *)arg0 objid:(NSNumber *)arg1 kind:(char)arg2;
- (NSURL *)fromURL;
- (void)setFromURL:(NSURL *)arg0;
- (NSArray *)queries;
- (void)setQueries:(NSArray *)arg0;

@end
