/* Runtime dump - TSPContainedObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPContainedObject : NSObject
{
    TSPObject * _owner;
}

@property (weak, nonatomic) TSPObject * owner;

- (void)willModifyForUpgrade;
- (void)willModify;
- (NSLocale *)objectLocale;
- (TSPContainedObject *)initWithOwner:(TSPObject *)arg0;
- (void).cxx_destruct;
- (TSPObject *)owner;
- (NSString *)documentRoot;
- (void)setOwner:(TSPObject *)arg0;

@end
