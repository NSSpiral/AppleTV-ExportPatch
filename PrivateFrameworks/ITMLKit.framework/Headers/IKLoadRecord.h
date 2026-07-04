/* Runtime dump - IKLoadRecord
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKLoadRecord : NSObject
{
    NSURL * _URL;
    ISURLOperation * _opertaion;
    NSString * _scriptStr;
}

@property (retain, nonatomic) NSURL * URL;
@property (retain, nonatomic) ISURLOperation * opertaion;
@property (retain, nonatomic) NSString * scriptStr;

- (NSURL *)URL;
- (void)setURL:(NSURL *)arg0;
- (void).cxx_destruct;
- (ISURLOperation *)opertaion;
- (void)setOpertaion:(ISURLOperation *)arg0;
- (NSString *)scriptStr;
- (void)setScriptStr:(NSString *)arg0;

@end
