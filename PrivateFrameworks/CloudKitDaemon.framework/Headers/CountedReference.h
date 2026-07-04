/* Runtime dump - CountedReference
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CountedReference : NSObject
{
    char _didScheduleDealloc;
    id _referencedObject;
    NSString * _name;
    unsigned int _referenceCount;
}

@property (retain, nonatomic) id referencedObject;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) unsigned int referenceCount;
@property (nonatomic) char didScheduleDealloc;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (NSObject *)referencedObject;
- (void)setReferencedObject:(NSObject *)arg0;
- (unsigned int)referenceCount;
- (void)setReferenceCount:(unsigned int)arg0;
- (char)didScheduleDealloc;
- (void)setDidScheduleDealloc:(char)arg0;

@end
