//
//  State.h
//  StateFlags
//
//  Created by Laura Gongaware on 7/12/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface State : NSObject

//let name: String
// * == pointer
// Primitives: base type that does not need a pointer
// nonatomic vs atomic - has to do with accessing the variable from seperate threads/resources at the same time and if that is allowed or not.
//copy vs no copy -- copy makes properties read only, not a reference property

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *abbreviation;

//init(name: String, abbreviation: String) { self.name = name, self.abbreviation = abbreviation }
- (instancetype)initWithName:(NSString *)name
                abbreviation:(NSString *)abbreviation;

@end

NS_ASSUME_NONNULL_END
