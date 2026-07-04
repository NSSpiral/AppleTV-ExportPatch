/* Runtime dump - CAMTimelapseBackendSessionContext
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseBackendSessionContext : NSObject
{
    NSString * _timelapseUUID;
    CAMTimelapseState * _state;
    NSArray * _filesToDelete;
    NSArray * _filesToWrite;
}

@property (readonly, nonatomic) NSString * timelapseUUID;
@property (retain, nonatomic) CAMTimelapseState * state;
@property (retain, nonatomic) NSArray * filesToDelete;
@property (retain, nonatomic) NSArray * filesToWrite;

- (CAMTimelapseBackendSessionContext *)init;
- (NSString *)description;
- (CAMTimelapseState *)state;
- (void)setState:(CAMTimelapseState *)arg0;
- (void).cxx_destruct;
- (CAMTimelapseBackendSessionContext *)initWithTimelapseUUID:(NSString *)arg0;
- (NSString *)timelapseUUID;
- (NSArray *)filesToDelete;
- (void)setFilesToDelete:(NSArray *)arg0;
- (NSArray *)filesToWrite;
- (void)setFilesToWrite:(NSArray *)arg0;

@end
