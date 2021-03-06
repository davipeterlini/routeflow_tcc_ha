#include "RFProtocol.h"

#include <mongo/client/dbclient.h>

PortRegister::PortRegister() {
    set_vm_id(0);
    set_vm_port(0);
    set_hwaddress(MACAddress());
}

PortRegister::PortRegister(uint64_t vm_id, uint32_t vm_port, MACAddress hwaddress) {
    set_vm_id(vm_id);
    set_vm_port(vm_port);
    set_hwaddress(hwaddress);
}

int PortRegister::get_type() {
    return PORT_REGISTER;
}

uint64_t PortRegister::get_vm_id() {
    return this->vm_id;
}

void PortRegister::set_vm_id(uint64_t vm_id) {
    this->vm_id = vm_id;
}

uint32_t PortRegister::get_vm_port() {
    return this->vm_port;
}

void PortRegister::set_vm_port(uint32_t vm_port) {
    this->vm_port = vm_port;
}

MACAddress PortRegister::get_hwaddress() {
    return this->hwaddress;
}

void PortRegister::set_hwaddress(MACAddress hwaddress) {
    this->hwaddress = hwaddress;
}

string PortRegister::str() {
    stringstream ss;
    ss << "PortRegister" << endl;
    ss << "  vm_id: " << to_string<uint64_t>(get_vm_id()) << endl;
    ss << "  vm_port: " << to_string<uint32_t>(get_vm_port()) << endl;
    ss << "  hwaddress: " << get_hwaddress().toString() << endl;
    return ss.str();
}

PortConfig::PortConfig() {
    set_vm_id(0);
    set_vm_port(0);
    set_operation_id(0);
}

PortConfig::PortConfig(uint64_t vm_id, uint32_t vm_port, uint32_t operation_id) {
    set_vm_id(vm_id);
    set_vm_port(vm_port);
    set_operation_id(operation_id);
}

int PortConfig::get_type() {
    return PORT_CONFIG;
}

uint64_t PortConfig::get_vm_id() {
    return this->vm_id;
}

void PortConfig::set_vm_id(uint64_t vm_id) {
    this->vm_id = vm_id;
}

uint32_t PortConfig::get_vm_port() {
    return this->vm_port;
}

void PortConfig::set_vm_port(uint32_t vm_port) {
    this->vm_port = vm_port;
}

uint32_t PortConfig::get_operation_id() {
    return this->operation_id;
}

void PortConfig::set_operation_id(uint32_t operation_id) {
    this->operation_id = operation_id;
}

string PortConfig::str() {
    stringstream ss;
    ss << "PortConfig" << endl;
    ss << "  vm_id: " << to_string<uint64_t>(get_vm_id()) << endl;
    ss << "  vm_port: " << to_string<uint32_t>(get_vm_port()) << endl;
    ss << "  operation_id: " << to_string<uint32_t>(get_operation_id()) << endl;
    return ss.str();
}

DatapathPortRegister::DatapathPortRegister() {
    set_ct_id(0);
    set_dp_id(0);
    set_dp_port(0);
}

DatapathPortRegister::DatapathPortRegister(uint64_t ct_id, uint64_t dp_id, uint32_t dp_port) {
    set_ct_id(ct_id);
    set_dp_id(dp_id);
    set_dp_port(dp_port);
}

int DatapathPortRegister::get_type() {
    return DATAPATH_PORT_REGISTER;
}

uint64_t DatapathPortRegister::get_ct_id() {
    return this->ct_id;
}

void DatapathPortRegister::set_ct_id(uint64_t ct_id) {
    this->ct_id = ct_id;
}

uint64_t DatapathPortRegister::get_dp_id() {
    return this->dp_id;
}

void DatapathPortRegister::set_dp_id(uint64_t dp_id) {
    this->dp_id = dp_id;
}

uint32_t DatapathPortRegister::get_dp_port() {
    return this->dp_port;
}

void DatapathPortRegister::set_dp_port(uint32_t dp_port) {
    this->dp_port = dp_port;
}

string DatapathPortRegister::str() {
    stringstream ss;
    ss << "DatapathPortRegister" << endl;
    ss << "  ct_id: " << to_string<uint64_t>(get_ct_id()) << endl;
    ss << "  dp_id: " << to_string<uint64_t>(get_dp_id()) << endl;
    ss << "  dp_port: " << to_string<uint32_t>(get_dp_port()) << endl;
    return ss.str();
}

DatapathDown::DatapathDown() {
    set_ct_id(0);
    set_dp_id(0);
}

DatapathDown::DatapathDown(uint64_t ct_id, uint64_t dp_id) {
    set_ct_id(ct_id);
    set_dp_id(dp_id);
}

int DatapathDown::get_type() {
    return DATAPATH_DOWN;
}

uint64_t DatapathDown::get_ct_id() {
    return this->ct_id;
}

void DatapathDown::set_ct_id(uint64_t ct_id) {
    this->ct_id = ct_id;
}

uint64_t DatapathDown::get_dp_id() {
    return this->dp_id;
}

void DatapathDown::set_dp_id(uint64_t dp_id) {
    this->dp_id = dp_id;
}

string DatapathDown::str() {
    stringstream ss;
    ss << "DatapathDown" << endl;
    ss << "  ct_id: " << to_string<uint64_t>(get_ct_id()) << endl;
    ss << "  dp_id: " << to_string<uint64_t>(get_dp_id()) << endl;
    return ss.str();
}

VirtualPlaneMap::VirtualPlaneMap() {
    set_vm_id(0);
    set_vm_port(0);
    set_vs_id(0);
    set_vs_port(0);
}

VirtualPlaneMap::VirtualPlaneMap(uint64_t vm_id, uint32_t vm_port, uint64_t vs_id, uint32_t vs_port) {
    set_vm_id(vm_id);
    set_vm_port(vm_port);
    set_vs_id(vs_id);
    set_vs_port(vs_port);
}

int VirtualPlaneMap::get_type() {
    return VIRTUAL_PLANE_MAP;
}

uint64_t VirtualPlaneMap::get_vm_id() {
    return this->vm_id;
}

void VirtualPlaneMap::set_vm_id(uint64_t vm_id) {
    this->vm_id = vm_id;
}

uint32_t VirtualPlaneMap::get_vm_port() {
    return this->vm_port;
}

void VirtualPlaneMap::set_vm_port(uint32_t vm_port) {
    this->vm_port = vm_port;
}

uint64_t VirtualPlaneMap::get_vs_id() {
    return this->vs_id;
}

void VirtualPlaneMap::set_vs_id(uint64_t vs_id) {
    this->vs_id = vs_id;
}

uint32_t VirtualPlaneMap::get_vs_port() {
    return this->vs_port;
}

void VirtualPlaneMap::set_vs_port(uint32_t vs_port) {
    this->vs_port = vs_port;
}

string VirtualPlaneMap::str() {
    stringstream ss;
    ss << "VirtualPlaneMap" << endl;
    ss << "  vm_id: " << to_string<uint64_t>(get_vm_id()) << endl;
    ss << "  vm_port: " << to_string<uint32_t>(get_vm_port()) << endl;
    ss << "  vs_id: " << to_string<uint64_t>(get_vs_id()) << endl;
    ss << "  vs_port: " << to_string<uint32_t>(get_vs_port()) << endl;
    return ss.str();
}

DataPlaneMap::DataPlaneMap() {
    set_ct_id(0);
    set_dp_id(0);
    set_dp_port(0);
    set_vs_id(0);
    set_vs_port(0);
}

DataPlaneMap::DataPlaneMap(uint64_t ct_id, uint64_t dp_id, uint32_t dp_port, uint64_t vs_id, uint32_t vs_port) {
    set_ct_id(ct_id);
    set_dp_id(dp_id);
    set_dp_port(dp_port);
    set_vs_id(vs_id);
    set_vs_port(vs_port);
}

int DataPlaneMap::get_type() {
    return DATA_PLANE_MAP;
}

uint64_t DataPlaneMap::get_ct_id() {
    return this->ct_id;
}

void DataPlaneMap::set_ct_id(uint64_t ct_id) {
    this->ct_id = ct_id;
}

uint64_t DataPlaneMap::get_dp_id() {
    return this->dp_id;
}

void DataPlaneMap::set_dp_id(uint64_t dp_id) {
    this->dp_id = dp_id;
}

uint32_t DataPlaneMap::get_dp_port() {
    return this->dp_port;
}

void DataPlaneMap::set_dp_port(uint32_t dp_port) {
    this->dp_port = dp_port;
}

uint64_t DataPlaneMap::get_vs_id() {
    return this->vs_id;
}

void DataPlaneMap::set_vs_id(uint64_t vs_id) {
    this->vs_id = vs_id;
}

uint32_t DataPlaneMap::get_vs_port() {
    return this->vs_port;
}

void DataPlaneMap::set_vs_port(uint32_t vs_port) {
    this->vs_port = vs_port;
}

string DataPlaneMap::str() {
    stringstream ss;
    ss << "DataPlaneMap" << endl;
    ss << "  ct_id: " << to_string<uint64_t>(get_ct_id()) << endl;
    ss << "  dp_id: " << to_string<uint64_t>(get_dp_id()) << endl;
    ss << "  dp_port: " << to_string<uint32_t>(get_dp_port()) << endl;
    ss << "  vs_id: " << to_string<uint64_t>(get_vs_id()) << endl;
    ss << "  vs_port: " << to_string<uint32_t>(get_vs_port()) << endl;
    return ss.str();
}

RouteMod::RouteMod() {
    set_mod(0);
    set_id(0);
    set_matches(std::vector<Match>());
    set_actions(std::vector<Action>());
    set_options(std::vector<Option>());
}

RouteMod::RouteMod(uint8_t mod, uint64_t id, std::vector<Match> matches, std::vector<Action> actions, std::vector<Option> options) {
    set_mod(mod);
    set_id(id);
    set_matches(matches);
    set_actions(actions);
    set_options(options);
}

int RouteMod::get_type() {
    return ROUTE_MOD;
}

uint8_t RouteMod::get_mod() {
    return this->mod;
}

void RouteMod::set_mod(uint8_t mod) {
    this->mod = mod;
}

uint64_t RouteMod::get_id() {
    return this->id;
}

void RouteMod::set_id(uint64_t id) {
    this->id = id;
}

std::vector<Match> RouteMod::get_matches() {
    return this->matches;
}

void RouteMod::set_matches(std::vector<Match> matches) {
    this->matches = matches;
}

void RouteMod::add_match(const Match& match) {
    this->matches.push_back(match);
}

std::vector<Action> RouteMod::get_actions() {
    return this->actions;
}

void RouteMod::set_actions(std::vector<Action> actions) {
    this->actions = actions;
}

void RouteMod::add_action(const Action& action) {
    this->actions.push_back(action);
}

std::vector<Option> RouteMod::get_options() {
    return this->options;
}

void RouteMod::set_options(std::vector<Option> options) {
    this->options = options;
}

void RouteMod::add_option(const Option& option) {
    this->options.push_back(option);
}

string RouteMod::str() {
    stringstream ss;
    ss << "RouteMod" << endl;
    ss << "  mod: " << to_string<uint16_t>(get_mod()) << endl;
    ss << "  id: " << to_string<uint64_t>(get_id()) << endl;
    ss << "  matches: " << MatchList::to_BSON(get_matches()) << endl;
    ss << "  actions: " << ActionList::to_BSON(get_actions()) << endl;
    ss << "  options: " << OptionList::to_BSON(get_options()) << endl;
    return ss.str();
}

ControllerRegister::ControllerRegister() {
    set_ct_addr(IPAddress(IPV4));
    set_ct_port(0);
    set_ct_role("");
}

ControllerRegister::ControllerRegister(IPAddress ct_addr, uint32_t ct_port, string ct_role) {
    set_ct_addr(ct_addr);
    set_ct_port(ct_port);
    set_ct_role(ct_role);
}

int ControllerRegister::get_type() {
    return CONTROLLER_REGISTER;
}

IPAddress ControllerRegister::get_ct_addr() {
    return this->ct_addr;
}

void ControllerRegister::set_ct_addr(IPAddress ct_addr) {
    this->ct_addr = ct_addr;
}

uint32_t ControllerRegister::get_ct_port() {
    return this->ct_port;
}

void ControllerRegister::set_ct_port(uint32_t ct_port) {
    this->ct_port = ct_port;
}

string ControllerRegister::get_ct_role() {
    return this->ct_role;
}

void ControllerRegister::set_ct_role(string ct_role) {
    this->ct_role = ct_role;
}

string ControllerRegister::str() {
    stringstream ss;
    ss << "ControllerRegister" << endl;
    ss << "  ct_addr: " << get_ct_addr().toString() << endl;
    ss << "  ct_port: " << to_string<uint32_t>(get_ct_port()) << endl;
    ss << "  ct_role: " << get_ct_role() << endl;
    return ss.str();
}

ElectMaster::ElectMaster() {
    set_ct_addr(IPAddress(IPV4));
    set_ct_port(0);
}

ElectMaster::ElectMaster(IPAddress ct_addr, uint32_t ct_port) {
    set_ct_addr(ct_addr);
    set_ct_port(ct_port);
}

int ElectMaster::get_type() {
    return ELECT_MASTER;
}

IPAddress ElectMaster::get_ct_addr() {
    return this->ct_addr;
}

void ElectMaster::set_ct_addr(IPAddress ct_addr) {
    this->ct_addr = ct_addr;
}

uint32_t ElectMaster::get_ct_port() {
    return this->ct_port;
}

void ElectMaster::set_ct_port(uint32_t ct_port) {
    this->ct_port = ct_port;
}

string ElectMaster::str() {
    stringstream ss;
    ss << "ElectMaster" << endl;
    ss << "  ct_addr: " << get_ct_addr().toString() << endl;
    ss << "  ct_port: " << to_string<uint32_t>(get_ct_port()) << endl;
    return ss.str();
}
