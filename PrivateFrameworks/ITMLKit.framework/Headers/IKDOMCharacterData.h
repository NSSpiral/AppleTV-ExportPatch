/* Runtime dump - IKDOMCharacterData
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMCharacterData : IKDOMNode <IKJSDOMCharacterData>

@property (retain, nonatomic) NSString * data;
@property (readonly, nonatomic) unsigned int length;

- (unsigned int)length;
- (NSString *)data;
- (void)setData:(NSString *)arg0;

@end
