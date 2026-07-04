/* Runtime dump - OADHyperlink
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADHyperlink : NSObject
{
    NSURL * mTargetLocation;
    int mTargetMode;
    NSString * mTargetFrame;
    NSString * mAction;
    NSString * mTooltip;
    NSString * mInvalidUrl;
    char mDoEndSound;
    char mIsVisited;
    char mDoAddToHistory;
}

@property (nonatomic) char doEndSound;
@property (nonatomic) char isVisited;
@property (nonatomic) char doAddToHistory;

- (void)dealloc;
- (OADHyperlink *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSURL *)action;
- (void)setAction:(NSObject *)arg0;
- (void)setTargetFrame:(NSObject *)arg0;
- (WKFrameInfo *)targetFrame;
- (NSObject *)targetLocation;
- (void)setTooltip:(id)arg0;
- (void)setDoEndSound:(char)arg0;
- (void)setIsVisited:(char)arg0;
- (void)setDoAddToHistory:(char)arg0;
- (void)setInvalidUrl:(NSURL *)arg0;
- (void)setTargetLocation:(NSObject *)arg0;
- (int)targetMode;
- (void)setTargetMode:(int)arg0;
- (NSURL *)invalidUrl;
- (id)tooltip;
- (char)doAddToHistory;
- (char)doEndSound;
- (char)isVisited;

@end
