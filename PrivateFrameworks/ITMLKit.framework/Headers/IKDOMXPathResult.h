/* Runtime dump - IKDOMXPathResult
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult>
{
    int _type;
    NSArray * _nodes;
}

@property int type;
@property (copy, nonatomic) NSArray * nodes;
@property (readonly, nonatomic) int resultType;
@property (readonly, nonatomic) int numberValue;
@property (readonly, weak, nonatomic) NSString * stringValue;
@property (readonly, nonatomic) char booleanValue;
@property (readonly, weak, nonatomic) IKDOMNode * singleNodeValue;
@property (readonly, nonatomic) char invalidIteratorState;
@property (readonly, nonatomic) int snapshotLength;

- (void)setType:(int)arg0;
- (int)type;
- (NSString *)stringValue;
- (void).cxx_destruct;
- (void)setNodes:(NSArray *)arg0;
- (IKDOMXPathResult *)initWithAppContext:(<IKApplication> *)arg0 type:(int)arg1 nodes:(NSArray *)arg2;
- (NSArray *)nodes;
- (int)resultType;
- (int)numberValue;
- (char)booleanValue;
- (IKDOMNode *)singleNodeValue;
- (char)invalidIteratorState;
- (int)snapshotLength;
- (id)iterateNext;
- (NSObject *)snapshotItem:(int)arg0;

@end
